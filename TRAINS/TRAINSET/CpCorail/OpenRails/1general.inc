
	Type ( Carriage )
	Size ( 2.825m 4.05m 26.4m )
	InertiaTensor ( Box (3m 4m 26m) )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness   ( 1e6N/m 	2e6N/m )
			Damping     ( 1e6N/m/s 	1e6N/m/s)
			Break 	( 600kN 	600kN )
			r0 		( 6cm 	9cm )
		)
		CouplingHasRigidConnection  ( )
		Velocity                    ( 0.12m/s )
	)
	Buffers (
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1.3e6N/m/s 3.8e6N/m/s )
			r0 ( 0m 1e9 )
		)
		Centre ( 0.5m )
		Radius ( 1m )
		Angle ( 0.5deg )
	)

	