//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOTrafficProbeProxy.h"

@interface GEOTrafficProbeManager : NSObject <GEOTrafficProbeProxy>
{
    id <GEOTrafficProbeProxy> _proxy;
}

+ (id)sharedManager;
+ (void)useProxyClass:(Class)arg1;
- (void).cxx_destruct;
- (void)reportBatchTrafficProbes:(id)arg1 auditToken:(id)arg2;
- (void)reportRealtimeTrafficProbes:(id)arg1 probeCount:(unsigned long long)arg2 recvTime:(id)arg3 forTripId:(id)arg4 auditToken:(id)arg5;
- (id)init;

@end

