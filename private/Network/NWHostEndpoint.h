//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWHostEndpoint : NWEndpoint
{
}

+ (id)endpointWithHostname:(id)arg1 port:(id)arg2;
+ (unsigned int)endpointType;
@property(readonly, nonatomic) NSString *port;
@property(readonly, nonatomic) NSString *hostname;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;

@end

