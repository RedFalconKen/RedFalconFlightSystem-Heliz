class RFFSHeli_Blackhawk_YourTextureName extends RFFSHeli_Blackhawk
{
	void RFFSHeli_Blackhawk_YourTextureName() 
	{
		c_heli_wreck_model = "RFFSHeli_Blackhawk_YourTextureName_Wreck";
	}
	
	override void AttachHeliParts() 			
	{
		if (!m_heli_parts_added)
		{
			EntityAI entity_Blackhawk;
			if ( Class.CastTo(entity_Blackhawk, this) )
			{
				entity_Blackhawk.GetInventory().CreateAttachment( "RFFSHeli_Blackhawk_Driverdoor_YourTextureName" );
				entity_Blackhawk.GetInventory().CreateAttachment( "RFFSHeli_Blackhawk_Codriverdoor_YourTextureName" );
				entity_Blackhawk.GetInventory().CreateAttachment( "RFFSHeli_Blackhawk_Cargo1_YourTextureName" );
				entity_Blackhawk.GetInventory().CreateAttachment( "RFFSHeli_Blackhawk_Cargo1a_YourTextureName" );
				entity_Blackhawk.GetInventory().CreateAttachment( "RFFSHeli_Blackhawk_Cargo2_YourTextureName" );
				entity_Blackhawk.GetInventory().CreateAttachment( "RFFSHeli_Blackhawk_Cargo2a_YourTextureName" );
				entity_Blackhawk.GetInventory().CreateAttachment( "RFFSHeli_Blackhawk_Cargo3_YourTextureName" );
				entity_Blackhawk.GetInventory().CreateAttachment( "RFFSHeli_Blackhawk_Cargo4_YourTextureName" );
				m_heli_parts_added = true;
				m_attachement_timer = GetGame().GetTime();
			}			
		}
	}
}

class RFFSHeli_Blackhawk_YourTextureName_Wreck extends RFFSHeli_Blackhawk_Wreck {}





