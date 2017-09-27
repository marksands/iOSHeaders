//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class NSString, SSMetricsConfiguration, SSMetricsPageEvent, SSURLConnectionRequest;

@interface RadioSearchRequest : RadioRequest
{
    SSURLConnectionRequest *_request;
    _Bool _excludeFeaturedStations;
    _Bool _shouldProcessCategories;
    NSString *_searchTerm;
    long long _searchCategory;
    unsigned long long _numberOfSearchResults;
    unsigned long long _searchResultsOffset;
    SSMetricsConfiguration *_metricsConfiguration;
    SSMetricsPageEvent *_metricsPageEvent;
}

@property(readonly, copy, nonatomic) SSMetricsPageEvent *metricsPageEvent; // @synthesize metricsPageEvent=_metricsPageEvent;
@property(readonly, retain, nonatomic) SSMetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;
@property(nonatomic) _Bool shouldProcessCategories; // @synthesize shouldProcessCategories=_shouldProcessCategories;
@property(nonatomic) _Bool excludeFeaturedStations; // @synthesize excludeFeaturedStations=_excludeFeaturedStations;
@property(nonatomic) unsigned long long searchResultsOffset; // @synthesize searchResultsOffset=_searchResultsOffset;
@property(nonatomic) unsigned long long numberOfSearchResults; // @synthesize numberOfSearchResults=_numberOfSearchResults;
@property(nonatomic) long long searchCategory; // @synthesize searchCategory=_searchCategory;
@property(readonly, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
- (void).cxx_destruct;
- (void)startWithSearchCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)description;
- (id)initWithSearchTerm:(id)arg1;
- (id)init;

@end

