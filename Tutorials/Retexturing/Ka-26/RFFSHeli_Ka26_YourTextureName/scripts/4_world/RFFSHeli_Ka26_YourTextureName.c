class RFFSHeli_Ka26_YourTextureName extends RFFSHeli_Ka26
{
	void RFFSHeli_Ka26_YourTextureName() 
	{
		c_heli_wreck_model = "RFFSHeli_Ka26_YourTextureName_wreck";
	}

	override void AttachHeliParts() 			
	{
		if (!m_heli_parts_added)
		{
			EntityAI entity_ka26;
			if ( Class.CastTo(entity_ka26, this) )
			{
				entity_ka26.GetInventory().CreateAttachment( "RFFSHeli_Ka26_DriverDoor_YourTextureName" );
				entity_ka26.GetInventory().CreateAttachment( "RFFSHeli_Ka26_Codriverdoor_YourTextureName" );
				entity_ka26.GetInventory().CreateAttachment( "RFFSHeli_Ka26_Cargo1_YourTextureName" );
				entity_ka26.GetInventory().CreateAttachment( "RFFSHeli_Ka26_Cargo2_YourTextureName" );
				m_heli_parts_added = true;
				m_attachement_timer = GetGame().GetTime();
			}			
		}
	}	
}

class RFFSHeli_Ka26_YourTextureName_wreck extends RFFSHeli_Ka26_wreck {}





