//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FindMyDevice/NSObject-Protocol.h>

@class NSString, NSXPCInterface;

@protocol FMNSXPCConnectionConfigurable <NSObject>
@property(readonly, nonatomic) _Bool machService;
@property(readonly, nonatomic) NSXPCInterface *remoteInterface;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) NSString *serviceName;
@end

