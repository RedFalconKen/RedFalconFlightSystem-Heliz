class RFFSHeli_S76_YourTextureName extends RFFSHeli_S76
{
	void RFFSHeli_S76_YourTextureName() 
	{
		c_heli_wreck_model = "RFFSHeli_S76_YourTextureName_Wreck";
	}

	override void AttachHeliParts() 			
	{
		if (!m_heli_parts_added)
		{
			EntityAI entity_S76;
			if ( Class.CastTo(entity_S76, this) )
			{
				entity_S76.GetInventory().CreateAttachment( "RFFSHeli_S76_Driverdoor_YourTextureName" );
				entity_S76.GetInventory().CreateAttachment( "RFFSHeli_S76_Codriverdoor_YourTextureName" );
				entity_S76.GetInventory().CreateAttachment( "RFFSHeli_S76_Cargo1_YourTextureName" );
				entity_S76.GetInventory().CreateAttachment( "RFFSHeli_S76_Cargo2_YourTextureName" );
				m_heli_parts_added = true;
				m_attachement_timer = GetGame().GetTime();
			}			
		}
	}
}

class RFFSHeli_S76_YourTextureName_Wreck extends RFFSHeli_S76_Wreck {}





