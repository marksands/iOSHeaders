//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDSFoundation/IDSBaseMessage.h>

#import "NSCopying.h"

@class NSDictionary, NSNumber;

@interface IDSMessage : IDSBaseMessage <NSCopying>
{
    NSNumber *_wantsDeliveryStatus;
    NSDictionary *_deliveryStatusContext;
    NSNumber *_version;
}

@property(copy) NSNumber *version; // @synthesize version=_version;
@property(copy) NSDictionary *deliveryStatusContext; // @synthesize deliveryStatusContext=_deliveryStatusContext;
@property(copy) NSNumber *wantsDeliveryStatus; // @synthesize wantsDeliveryStatus=_wantsDeliveryStatus;
- (void).cxx_destruct;
- (_Bool)wantsUserAgentInHeaders;
- (id)userAgentHeaderString;
- (id)messageBody;
- (_Bool)wantsHTTPHeaders;
- (_Bool)wantsAPSRetries;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

