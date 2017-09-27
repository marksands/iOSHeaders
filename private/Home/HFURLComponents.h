//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HFHomeKitDispatcher, NAFuture, NSURL;

@interface HFURLComponents : NSObject
{
    NSURL *_url;
    HFHomeKitDispatcher *_homeKitDispatcher;
}

+ (id)aboutResidentDeviceURL;
@property(readonly, nonatomic) HFHomeKitDispatcher *homeKitDispatcher; // @synthesize homeKitDispatcher=_homeKitDispatcher;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)_homeKitIdentifier;
@property(readonly, nonatomic) NAFuture *homeKitObjectFuture; // @dynamic homeKitObjectFuture;
@property(readonly, nonatomic) unsigned long long destination; // @dynamic destination;
- (id)initWithURL:(id)arg1 homeKitDispatcher:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

