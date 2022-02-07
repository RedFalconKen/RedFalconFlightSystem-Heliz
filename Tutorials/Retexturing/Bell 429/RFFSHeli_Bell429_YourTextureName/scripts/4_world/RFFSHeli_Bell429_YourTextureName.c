class RFFSHeli_Bell429_YourTextureName extends RFFSHeli_Bell429
{
	override void AttachHeliParts() 			
	{
		if (!m_heli_parts_added)
		{
			EntityAI entity_Bell429;
			if ( Class.CastTo(entity_Bell429, this) )
			{
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Driverdoor_YourTextureName" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Codriverdoor_YourTextureName" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Cargo1_YourTextureName" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Cargo2_YourTextureName" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Cargo3_YourTextureName" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_Cargo4_YourTextureName" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_interior_YourTextureName" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_rearseats_YourTextureName" );
				entity_Bell429.GetInventory().CreateAttachment( "RFFSHeli_Bell429_skids_YourTextureName" );
				m_heli_parts_added = true;
				m_attachement_timer = GetGame().GetTime();
			}			
		}
	}
}

class RFFSHeli_Bell429_YourTextureName_wreck_Camo2 extends RFFSHeli_Bell429_wreck {}





