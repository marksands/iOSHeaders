//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFIVGenerator-Protocol.h>

@class NSData, NSString;

@interface SFIncrementingIVGenerator : NSObject <SFIVGenerator>
{
    id _incrementingIVGeneratorInternal;
}

- (void).cxx_destruct;
- (id)generateIVWithLength:(long long)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSData *messageID;
- (id)initWithMessageID:(id)arg1;
- (id)initWithRandomMessageID;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

