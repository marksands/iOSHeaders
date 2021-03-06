//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTXPCServiceSubscriptionContext, NSData, NSString;

@interface CTBinarySMS : NSObject
{
    int _portAddressingScheme;
    int _srcPort;
    int _dstPort;
    NSData *_payload;
    NSString *_destinationAddress;
    NSString *_smscAddress;
    CTXPCServiceSubscriptionContext *_context;
}

@property(copy, nonatomic) CTXPCServiceSubscriptionContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *smscAddress; // @synthesize smscAddress=_smscAddress;
@property(copy, nonatomic) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) int dstPort; // @synthesize dstPort=_dstPort;
@property(nonatomic) int srcPort; // @synthesize srcPort=_srcPort;
@property(nonatomic) int portAddressingScheme; // @synthesize portAddressingScheme=_portAddressingScheme;
- (_Bool)isValid;
- (void)dealloc;
- (id)init;

@end

