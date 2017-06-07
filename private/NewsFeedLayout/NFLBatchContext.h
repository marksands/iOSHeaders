//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NSCoding-Protocol.h>
#import <NewsFeedLayout/NSCopying-Protocol.h>

@class NSString;

@interface NFLBatchContext : NSObject <NSCopying, NSCoding>
{
    NSString *_identifier;
    unsigned long long _batchType;
}

@property(readonly, nonatomic) unsigned long long batchType; // @synthesize batchType=_batchType;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initForTesting;
- (id)initWithBatchType:(unsigned long long)arg1;
- (id)init;

@end

