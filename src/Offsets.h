#pragma once

enum RelocationID
{
	DamageCorrection,
	DamageHook,
	ProjectileUpdate,
	ProjectileImpact,
	ProjectileVsActorGetImpactData,
	WorldToCameraMatrix,
	HandleProjectileAttack,
};

namespace RelocationHelper
{
	static REL::Relocation<uintptr_t> Get( RelocationID a_id, REL::Version a_ver )
	{
		switch( a_id )
		{
		case DamageCorrection:
			return REL::RelocationID(37633, 38586), REL::VariantOffset(0x14D, 0x189);
		case DamageHook:
			return REL::RelocationID(42842, 44014), REL::VariantOffset(0x649, 0x62D, 0x868);
		case ProjectileUpdate:
			return REL::RelocationID(42943, 44123), REL::VariantOffset(0x410, 0x407);
		case ProjectileImpact:
			return REL::RelocationID(43013, 44204), REL::VariantOffset(0x3E3, 0x3D4);
		case ProjectileVsActorGetImpactData:
			return REL::RelocationID(36682, 37690), REL::VariantOffset(0x354, 0x3AF);
		case WorldToCameraMatrix:
			return REL::RelocationID(519579, 406126);
		case HandleProjectileAttack:
			return REL::RelocationID(36016, 36991), REL::VariantOffset(0x926, 0xA3D, 0x966);
		}

		return REL::Relocation<uintptr_t>();
	}
}
