class RFFSHeli_UH1H_YourTextureName extends RFFSHeli_UH1H
{
	void RFFSHeli_UH1H_YourTextureName() 
	{
		c_heli_wreck_model = "RFFSHeli_UH1H_YourTextureName_Wreck";
	}

	override void AttachHeliParts() 			
	{
		if (!m_heli_parts_added)
		{
			EntityAI entity_UH1H;
			if ( Class.CastTo(entity_UH1H, this) )
			{
				entity_UH1H.GetInventory().CreateAttachment( "RFFSHeli_UH1H_Driverdoor_YourTextureName" );
				entity_UH1H.GetInventory().CreateAttachment( "RFFSHeli_UH1H_Codriverdoor_YourTextureName" );
				entity_UH1H.GetInventory().CreateAttachment( "RFFSHeli_UH1H_Cargo1_YourTextureName" );
				entity_UH1H.GetInventory().CreateAttachment( "RFFSHeli_UH1H_Cargo2_YourTextureName" );
				entity_UH1H.GetInventory().CreateAttachment( "RFFSHeli_UH1H_Cargo1a_YourTextureName" );
				entity_UH1H.GetInventory().CreateAttachment( "RFFSHeli_UH1H_Cargo2a_YourTextureName" );
				m_heli_parts_added = true;
				m_attachement_timer = GetGame().GetTime();
			}			
		}
	}
}

class RFFSHeli_UH1H_YourTextureName_Wreck extends RFFSHeli_UH1H_wreck {}





