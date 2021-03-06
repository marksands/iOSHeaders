//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_os_transaction>, NSString;

@interface WLKTransactionScope : NSObject
{
    NSObject<OS_os_transaction> *_transaction;
    NSString *_identifier;
    double _delay;
}

@property(readonly) double delay; // @synthesize delay=_delay;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 delay:(double)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

