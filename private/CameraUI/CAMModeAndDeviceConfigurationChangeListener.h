//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CAMModeAndDeviceConfigurationChangeListener : NSObject
{
    long long _desiredMode;
    long long _desiredDevicePosition;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long desiredDevicePosition; // @synthesize desiredDevicePosition=_desiredDevicePosition;
@property(nonatomic) long long desiredMode; // @synthesize desiredMode=_desiredMode;
- (void).cxx_destruct;

@end

