class RFFSHeli_Bo105m_YourTextureName extends RFFSHeli_Bo105m
{
	void RFFSHeli_Bo105m_YourTextureName() 
	{
		c_heli_wreck_model = "RFFSHeli_Bo105m_YourTextureName_Wreck";
	}

	override void AttachHeliParts() 			
	{
		if (!m_heli_parts_added)
		{
			EntityAI entity_Bo105m;
			if ( Class.CastTo(entity_Bo105m, this) )
			{
				entity_Bo105m.GetInventory().CreateAttachment( "RFFSHeli_Bo105m_Driverdoor_YourTextureName" );
				entity_Bo105m.GetInventory().CreateAttachment( "RFFSHeli_Bo105m_Codriverdoor_YourTextureName" );
				entity_Bo105m.GetInventory().CreateAttachment( "RFFSHeli_Bo105m_Cargo1_YourTextureName" );
				entity_Bo105m.GetInventory().CreateAttachment( "RFFSHeli_Bo105m_Cargo2_YourTextureName" );
				entity_Bo105m.GetInventory().CreateAttachment( "RFFSHeli_Bo105m_Cargo3_YourTextureName" );
				entity_Bo105m.GetInventory().CreateAttachment( "RFFSHeli_Bo105m_Cargo4_YourTextureName" );
				entity_Bo105m.GetInventory().CreateAttachment( "RFFSHeli_Bo105m_Fuselage_YourTextureName" );
				m_heli_parts_added = true;
				m_attachement_timer = GetGame().GetTime();
			}			
		}
	}
}

class RFFSHeli_Bo105m_YourTextureName_Wreck extends RFFSHeli_Bo105m_Wreck {}





