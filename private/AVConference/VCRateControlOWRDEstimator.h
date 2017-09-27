//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VCRateControlOWRDEstimator : NSObject
{
    unsigned int _firstSendTimestamp;
    unsigned int _previousSendTimestamp;
    unsigned int _previousSendTimestampDiff;
    int _sendTimestampWrappedAround;
    double _firstSendTime;
    unsigned int _firstReceiveTimestamp;
    unsigned int _previousReceiveTimestamp;
    unsigned int _previousReceiveTimestampDiff;
    int _receiveTimestampWrappedAround;
    double _firstReceiveTime;
    double _shortAverageLag;
    double _longAverageLag;
    double _owrd;
}

@property(readonly, nonatomic) double owrd; // @synthesize owrd=_owrd;
- (void)calculateOWRDWithSendTime:(double)arg1 receiveTime:(double)arg2;
- (double)relativeReceiveTimeWithTimestamp:(unsigned short)arg1 timestampRate:(unsigned short)arg2;
- (double)relativeSendTimeWithTimestamp:(unsigned int)arg1 timestampRate:(unsigned int)arg2;

@end

