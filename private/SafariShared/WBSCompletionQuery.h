//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString, NSURLRequest;

@interface WBSCompletionQuery : NSObject <NSCopying>
{
    NSString *_normalizedQueryStringForParsec;
    _Bool _forLastSearch;
    NSString *_queryString;
    NSArray *_querySuggestions;
    NSString *_rewrittenQueryStringFromParsec;
    long long _queryID;
    unsigned long long _triggerEvent;
    NSString *_parsecFeedbackQueryIdentifier;
    NSURLRequest *_parsecSearchRequest;
    time_point_e708cccf _timestamp;
    NSString *_searchSuggestionProviderIdentifier;
    duration_6174cf92 _searchSuggestionProviderLatency;
    duration_6174cf92 _parsecLatency;
    unsigned long long _indexInFeedbackArray;
}

+ (void)initialize;
@property(nonatomic) unsigned long long indexInFeedbackArray; // @synthesize indexInFeedbackArray=_indexInFeedbackArray;
@property(nonatomic) duration_6174cf92 parsecLatency; // @synthesize parsecLatency=_parsecLatency;
@property(nonatomic) duration_6174cf92 searchSuggestionProviderLatency; // @synthesize searchSuggestionProviderLatency=_searchSuggestionProviderLatency;
@property(copy, nonatomic) NSString *searchSuggestionProviderIdentifier; // @synthesize searchSuggestionProviderIdentifier=_searchSuggestionProviderIdentifier;
@property(readonly, nonatomic) time_point_e708cccf timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSURLRequest *parsecSearchRequest; // @synthesize parsecSearchRequest=_parsecSearchRequest;
@property(copy, nonatomic) NSString *parsecFeedbackQueryIdentifier; // @synthesize parsecFeedbackQueryIdentifier=_parsecFeedbackQueryIdentifier;
@property(nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(readonly, nonatomic) long long queryID; // @synthesize queryID=_queryID;
@property(copy, nonatomic) NSString *rewrittenQueryStringFromParsec; // @synthesize rewrittenQueryStringFromParsec=_rewrittenQueryStringFromParsec;
@property(copy) NSArray *querySuggestions; // @synthesize querySuggestions=_querySuggestions;
@property(nonatomic, getter=isForLastSearch) _Bool forLastSearch; // @synthesize forLastSearch=_forLastSearch;
@property(readonly, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *normalizedQueryStringForParsec;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQueryString:(id)arg1 queryID:(long long)arg2;
- (id)initWithQueryString:(id)arg1;
- (id)_initWithQueryString:(id)arg1 queryID:(long long)arg2 timestamp:(time_point_e708cccf)arg3 indexInFeedbackArray:(unsigned long long)arg4 triggerEvent:(unsigned long long)arg5;
- (id)init;

@end

