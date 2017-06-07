//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSCoding-Protocol.h>

@class NSString;

@interface CLSDiscoveryMatch : NSObject <NSCoding>
{
    NSString *_contextURI;
    unsigned long long _matchedCategoryOptions;
    double _confidence;
}

+ (_Bool)supportsSecureCoding;
+ (id)discoveryMatchWithContextURI:(id)arg1 matchedCategoryOptions:(unsigned long long)arg2 confidence:(double)arg3;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) unsigned long long matchedCategoryOptions; // @synthesize matchedCategoryOptions=_matchedCategoryOptions;
@property(retain, nonatomic) NSString *contextURI; // @synthesize contextURI=_contextURI;
- (void).cxx_destruct;
- (id)_matchedCategoryString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithContextURI:(id)arg1 matchedCategoryOptions:(unsigned long long)arg2 confidence:(double)arg3;

@end
