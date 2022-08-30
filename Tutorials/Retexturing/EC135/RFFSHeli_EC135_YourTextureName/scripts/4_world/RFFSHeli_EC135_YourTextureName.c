class RFFSHeli_EC135_YourTextureName extends RFFSHeli_EC135
{
	void RFFSHeli_EC135_YourTextureName() 
	{
		c_heli_wreck_model = "RFFSHeli_EC135_YourTextureName_Wreck";
	}

	override void AttachHeliParts() 			
	{
		if (!m_heli_parts_added)
		{
			EntityAI entity_EC135;
			if ( Class.CastTo(entity_EC135, this) )
			{
				entity_EC135.GetInventory().CreateAttachment( "RFFSHeli_EC135_Driverdoor_YourTextureName" );
				entity_EC135.GetInventory().CreateAttachment( "RFFSHeli_EC135_Codriverdoor_YourTextureName" );
				entity_EC135.GetInventory().CreateAttachment( "RFFSHeli_EC135_Cargo1_YourTextureName" );
				entity_EC135.GetInventory().CreateAttachment( "RFFSHeli_EC135_Cargo2_YourTextureName" );
				entity_EC135.GetInventory().CreateAttachment( "RFFSHeli_EC135_Cargo3_YourTextureName" );
				entity_EC135.GetInventory().CreateAttachment( "RFFSHeli_EC135_Cargo4_YourTextureName" );
				m_heli_parts_added = true;
				m_attachement_timer = GetGame().GetTime();
			}			
		}
	}
}

class RFFSHeli_EC135_YourTextureName_wreck extends RFFSHeli_EC135_wreck {}





