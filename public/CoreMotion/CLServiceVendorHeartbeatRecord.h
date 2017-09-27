//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLSilo;

@interface CLServiceVendorHeartbeatRecord : NSObject
{
    int _synCount;
    int _ackCount;
    int _residentCount;
    CLSilo *_silo;
    Class _svcClass;
}

@property(readonly, nonatomic) int ackCount; // @synthesize ackCount=_ackCount;
@property(readonly, nonatomic) int synCount; // @synthesize synCount=_synCount;
@property(nonatomic) int residentCount; // @synthesize residentCount=_residentCount;
@property(readonly, nonatomic) Class svcClass; // @synthesize svcClass=_svcClass;
@property(readonly, nonatomic) CLSilo *silo; // @synthesize silo=_silo;
- (void).cxx_destruct;
- (void)ack;
- (void)syn;
- (id)initTrackingServiceClass:(Class)arg1;

@end

