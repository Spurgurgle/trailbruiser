class TrailtesterFrontLight extends CarLightBase
{
	void TrailtesterFrontLight()
	{
		m_SegregatedBrightness = 6;
		m_SegregatedRadius = 60;
		m_SegregatedAngle = 80;
		m_SegregatedColorRGB = Vector(1, 0.9, 0.9);
		
		m_AggregatedBrightness = 10;
		m_AggregatedRadius = 65;
		m_AggregatedAngle = 80;
		m_AggregatedColorRGB = Vector(1, 0.9, 0.9);
		
		FadeIn(0.3);
		SetFadeOutTime(0.25);
		
		SegregateLight();
	}
}