
Comment (****************** General Information *******************)
	Size ( 3.06m 4.35432m 16.988m )  
	WheelRadius ( 0.508m )
	InertiaTensor ( Box ( 3.06m 4.35432m 16.988m ) )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 2e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 1200kN 1200kN )
			r0 ( 10cm 40cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.1m/s )
	)
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 2e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 1200kN 1200kN )
			r0 ( 10cm 40cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( -0.1m/s )
	)
	Buffers (
		Spring (
			Stiffness ( 5e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			r0 ( 0m 1e9 )
		)
		Centre ( 0.5m )
		Radius ( 1m )
		Angle ( 0.5deg )
	)