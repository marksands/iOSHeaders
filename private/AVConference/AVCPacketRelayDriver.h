//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface AVCPacketRelayDriver : NSObject
{
}

+ (id)sharedInstance;
- (void)dealloc;
- (id)init;
- (void)stopMonitoringFileDescriptor:(int)arg1;
- (void)startMonitoringFileDescriptor:(int)arg1 forConnection:(id)arg2;

@end

