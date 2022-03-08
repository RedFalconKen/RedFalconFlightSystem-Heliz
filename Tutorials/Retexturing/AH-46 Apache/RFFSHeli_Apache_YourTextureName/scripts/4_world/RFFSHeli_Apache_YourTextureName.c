class RFFSHeli_Apache_YourTextureName extends RFFSHeli_Apache
{
	void RFFSHeli_Apache_YourTextureName() 
	{
		c_heli_wreck_model = "RFFSHeli_Apache_YourTextureName_Wreck";
	}
	
	override void AttachHeliParts() 			
	{
		if (!m_heli_parts_added)
		{
			EntityAI entity_Apache;
			if ( Class.CastTo(entity_Apache, this) )
			{
				entity_Apache.GetInventory().CreateAttachment( "RFFSHeli_Apache_Driverdoor_YourTextureName" );
				entity_Apache.GetInventory().CreateAttachment( "RFFSHeli_Apache_Codriverdoor_YourTextureName" );
				m_heli_parts_added = true;
				m_attachement_timer = GetGame().GetTime();
			}			
		}
	}
}

class RFFSHeli_Apache_YourTextureName_Wreck extends RFFSHeli_Apache_Wreck {}





