//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RPCompanionLinkClient;

@interface RPCompanionLinkTransaction : NSObject
{
    RPCompanionLinkClient *_client;
    NSString *_identifier;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)invalidate;

@end

