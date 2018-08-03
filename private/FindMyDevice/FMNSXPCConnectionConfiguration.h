//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMNSXPCConnectionConfigurable.h"

@class NSString, NSXPCInterface;

@interface FMNSXPCConnectionConfiguration : NSObject <FMNSXPCConnectionConfigurable>
{
    _Bool _machService;
    NSString *_serviceName;
    NSXPCInterface *_remoteInterface;
    NSXPCInterface *_exportedInterface;
    unsigned long long _options;
}

+ (id)helperConfiguration;
+ (id)fmipConfiguration;
+ (id)btDiscoveryConfiguration;
+ (id)userNotificationConfiguration;
+ (id)identityConfiguration;
@property(nonatomic) _Bool machService; // @synthesize machService=_machService;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain, nonatomic) NSXPCInterface *remoteInterface; // @synthesize remoteInterface=_remoteInterface;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

