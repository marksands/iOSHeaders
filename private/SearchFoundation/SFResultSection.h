//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFJSONSerializable-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFResultSection : NSObject <SFJSONSerializable, NSSecureCoding, NSCopying>
{
    NSArray *_results;
    unsigned long long _maxInitiallyVisibleResults;
    NSString *_identifier;
    NSString *_bundleIdentifier;
    NSString *_title;
    NSString *_moreText;
    double _rankingScore;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property(copy, nonatomic) NSString *moreText; // @synthesize moreText=_moreText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long maxInitiallyVisibleResults; // @synthesize maxInitiallyVisibleResults=_maxInitiallyVisibleResults;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

