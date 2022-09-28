class RFFSHeli_R22_YourTextureName extends RFFSHeli_R22
{
	void RFFSHeli_R22_YourTextureName() 
	{
		c_heli_wreck_model = "RFFSHeli_R22_YourTextureName_Wreck";
	}
	
	override void AttachHeliParts() 			
	{
		if (!m_heli_parts_added)
		{
			EntityAI entity_R22;
			if ( Class.CastTo(entity_R22, this) )
			{
				entity_R22.GetInventory().CreateAttachment( "RFFSHeli_R22_Driverdoor_YourTextureName" );
				entity_R22.GetInventory().CreateAttachment( "RFFSHeli_R22_Codriverdoor_YourTextureName" );
				m_heli_parts_added = true;
				m_attachement_timer = GetGame().GetTime();
			}			
		}
	}
}

class RFFSHeli_R22_YourTextureName_Wreck extends RFFSHeli_R22_Wreck {}





