//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface PKExpressTransactionState : NSObject <NSSecureCoding>
{
    _Bool _processing;
    long long _expressType;
    unsigned long long _receivedEvents;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long receivedEvents; // @synthesize receivedEvents=_receivedEvents;
@property(nonatomic, getter=isProcessing) _Bool processing; // @synthesize processing=_processing;
@property(nonatomic) long long expressType; // @synthesize expressType=_expressType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

