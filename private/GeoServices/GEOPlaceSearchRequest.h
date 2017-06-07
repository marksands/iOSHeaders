//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdditionalEnabledMarkets, GEOAddress, GEOBusinessOptions, GEOClientCapabilities, GEOIndexQueryNode, GEOLatLng, GEOLocation, GEOMapRegion, GEOSearchSubstring, GEOSuggestionsOptions, NSData, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPlaceSearchRequest : PBRequest <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOSessionID _sessionGUID;
    CDStruct_95bda58d _additionalPlaceTypes;
    CDStruct_62a50c50 _businessIDs;
    CDStruct_95bda58d _optionalSuppressionReasons;
    long long _geoId;
    unsigned long long _intersectingGeoId;
    double _timeSinceMapEnteredForeground;
    double _timeSinceMapViewportChanged;
    double _timestamp;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOAddress *_address;
    GEOBusinessOptions *_businessOptions;
    int _businessSortOrder;
    GEOClientCapabilities *_clientCapabilities;
    NSString *_deviceCountryCode;
    GEOLatLng *_deviceLocation;
    NSString *_deviceLocationCountryCode;
    NSString *_deviceTimeZone;
    NSMutableArray *_filterByBusinessCategorys;
    GEOIndexQueryNode *_indexFilter;
    NSString *_inputLanguage;
    int _knownAccuracy;
    GEOLatLng *_knownLocation;
    NSMutableArray *_limitToCountryCodeIso2s;
    int _localSearchProviderID;
    GEOLocation *_location;
    int _mapMode;
    GEOMapRegion *_mapRegion;
    int _maxBusinessReviews;
    int _maxResults;
    NSString *_phoneticLocaleIdentifier;
    int _placeTypeLimit;
    GEOAddress *_preserveFields;
    NSString *_search;
    NSString *_searchContext;
    GEOSearchSubstring *_searchContextSubstring;
    GEOLatLng *_searchLocation;
    int _searchSource;
    NSMutableArray *_searchSubstrings;
    int _sequenceNumber;
    NSMutableArray *_serviceTags;
    GEOSuggestionsOptions *_suggestionsOptions;
    NSString *_suggestionsPrefix;
    int _transportTypeForTravelTimes;
    NSString *_viewportCenterCountryCode;
    NSData *_zilchPoints;
    _Bool _excludeAddressInResults;
    _Bool _includeBusinessCategories;
    _Bool _includeBusinessRating;
    _Bool _includeEntryPoints;
    _Bool _includeFeatureSets;
    _Bool _includeGeoId;
    _Bool _includeMatchedToken;
    _Bool _includeNameForForwardGeocodingResults;
    _Bool _includePhonetics;
    _Bool _includeQuads;
    _Bool _includeRoadAccessPoints;
    _Bool _includeSpokenNames;
    _Bool _includeStatusCodeInfo;
    _Bool _includeSuggestionsOnly;
    _Bool _includeTravelDistance;
    _Bool _includeTravelTime;
    _Bool _includeUnmatchedStrings;
    _Bool _isCanonicalLocationSearch;
    _Bool _isFromAPI;
    _Bool _isPopularNearbyRequest;
    _Bool _isStrictGeocoding;
    _Bool _isStrictMapRegion;
    _Bool _structuredSearch;
    _Bool _suppressResultsRequiringAttribution;
    struct {
        unsigned int sessionGUID:1;
        unsigned int geoId:1;
        unsigned int intersectingGeoId:1;
        unsigned int timeSinceMapEnteredForeground:1;
        unsigned int timeSinceMapViewportChanged:1;
        unsigned int timestamp:1;
        unsigned int businessSortOrder:1;
        unsigned int knownAccuracy:1;
        unsigned int localSearchProviderID:1;
        unsigned int mapMode:1;
        unsigned int maxBusinessReviews:1;
        unsigned int maxResults:1;
        unsigned int placeTypeLimit:1;
        unsigned int searchSource:1;
        unsigned int sequenceNumber:1;
        unsigned int transportTypeForTravelTimes:1;
        unsigned int excludeAddressInResults:1;
        unsigned int includeBusinessCategories:1;
        unsigned int includeBusinessRating:1;
        unsigned int includeEntryPoints:1;
        unsigned int includeFeatureSets:1;
        unsigned int includeGeoId:1;
        unsigned int includeMatchedToken:1;
        unsigned int includeNameForForwardGeocodingResults:1;
        unsigned int includePhonetics:1;
        unsigned int includeQuads:1;
        unsigned int includeRoadAccessPoints:1;
        unsigned int includeSpokenNames:1;
        unsigned int includeStatusCodeInfo:1;
        unsigned int includeSuggestionsOnly:1;
        unsigned int includeTravelDistance:1;
        unsigned int includeTravelTime:1;
        unsigned int includeUnmatchedStrings:1;
        unsigned int isCanonicalLocationSearch:1;
        unsigned int isFromAPI:1;
        unsigned int isPopularNearbyRequest:1;
        unsigned int isStrictGeocoding:1;
        unsigned int isStrictMapRegion:1;
        unsigned int structuredSearch:1;
        unsigned int suppressResultsRequiringAttribution:1;
    } _has;
}

+ (Class)serviceTagType;
+ (Class)searchSubstringType;
+ (Class)limitToCountryCodeIso2Type;
+ (Class)filterByBusinessCategoryType;
@property(retain, nonatomic) NSString *viewportCenterCountryCode; // @synthesize viewportCenterCountryCode=_viewportCenterCountryCode;
@property(retain, nonatomic) NSString *deviceLocationCountryCode; // @synthesize deviceLocationCountryCode=_deviceLocationCountryCode;
@property(nonatomic) _Bool isPopularNearbyRequest; // @synthesize isPopularNearbyRequest=_isPopularNearbyRequest;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets; // @synthesize additionalEnabledMarkets=_additionalEnabledMarkets;
@property(nonatomic) _Bool includeNameForForwardGeocodingResults; // @synthesize includeNameForForwardGeocodingResults=_includeNameForForwardGeocodingResults;
@property(retain, nonatomic) GEOLatLng *searchLocation; // @synthesize searchLocation=_searchLocation;
@property(nonatomic) _Bool includeMatchedToken; // @synthesize includeMatchedToken=_includeMatchedToken;
@property(retain, nonatomic) GEOLatLng *knownLocation; // @synthesize knownLocation=_knownLocation;
@property(nonatomic) unsigned long long intersectingGeoId; // @synthesize intersectingGeoId=_intersectingGeoId;
@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(nonatomic) _Bool includeFeatureSets; // @synthesize includeFeatureSets=_includeFeatureSets;
@property(retain, nonatomic) GEOIndexQueryNode *indexFilter; // @synthesize indexFilter=_indexFilter;
@property(nonatomic) _Bool includeUnmatchedStrings; // @synthesize includeUnmatchedStrings=_includeUnmatchedStrings;
@property(retain, nonatomic) GEOAddress *preserveFields; // @synthesize preserveFields=_preserveFields;
@property(nonatomic) _Bool includeStatusCodeInfo; // @synthesize includeStatusCodeInfo=_includeStatusCodeInfo;
@property(retain, nonatomic) GEOSearchSubstring *searchContextSubstring; // @synthesize searchContextSubstring=_searchContextSubstring;
@property(retain, nonatomic) NSString *searchContext; // @synthesize searchContext=_searchContext;
@property(nonatomic) _Bool includeGeoId; // @synthesize includeGeoId=_includeGeoId;
@property(retain, nonatomic) NSMutableArray *searchSubstrings; // @synthesize searchSubstrings=_searchSubstrings;
@property(nonatomic) _Bool excludeAddressInResults; // @synthesize excludeAddressInResults=_excludeAddressInResults;
@property(nonatomic) _Bool includeQuads; // @synthesize includeQuads=_includeQuads;
@property(nonatomic) long long geoId; // @synthesize geoId=_geoId;
@property(nonatomic) _Bool isCanonicalLocationSearch; // @synthesize isCanonicalLocationSearch=_isCanonicalLocationSearch;
@property(retain, nonatomic) NSMutableArray *limitToCountryCodeIso2s; // @synthesize limitToCountryCodeIso2s=_limitToCountryCodeIso2s;
@property(nonatomic) _Bool includeRoadAccessPoints; // @synthesize includeRoadAccessPoints=_includeRoadAccessPoints;
@property(nonatomic) _Bool includeTravelDistance; // @synthesize includeTravelDistance=_includeTravelDistance;
@property(nonatomic) _Bool isStrictGeocoding; // @synthesize isStrictGeocoding=_isStrictGeocoding;
@property(retain, nonatomic) GEOSuggestionsOptions *suggestionsOptions; // @synthesize suggestionsOptions=_suggestionsOptions;
@property(nonatomic) _Bool includeTravelTime; // @synthesize includeTravelTime=_includeTravelTime;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(retain, nonatomic) NSString *deviceTimeZone; // @synthesize deviceTimeZone=_deviceTimeZone;
@property(nonatomic) _Bool includeSpokenNames; // @synthesize includeSpokenNames=_includeSpokenNames;
@property(nonatomic) double timeSinceMapViewportChanged; // @synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged;
@property(nonatomic) double timeSinceMapEnteredForeground; // @synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground;
@property(nonatomic) _Bool isFromAPI; // @synthesize isFromAPI=_isFromAPI;
@property(nonatomic) _Bool suppressResultsRequiringAttribution; // @synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution;
@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSString *phoneticLocaleIdentifier; // @synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier;
@property(retain, nonatomic) NSString *inputLanguage; // @synthesize inputLanguage=_inputLanguage;
@property(retain, nonatomic) GEOLatLng *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(retain, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;
@property(retain, nonatomic) NSString *suggestionsPrefix; // @synthesize suggestionsPrefix=_suggestionsPrefix;
@property(nonatomic) _Bool structuredSearch; // @synthesize structuredSearch=_structuredSearch;
@property(nonatomic) _Bool includeSuggestionsOnly; // @synthesize includeSuggestionsOnly=_includeSuggestionsOnly;
@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;
@property(retain, nonatomic) GEOBusinessOptions *businessOptions; // @synthesize businessOptions=_businessOptions;
@property(nonatomic) _Bool includeEntryPoints; // @synthesize includeEntryPoints=_includeEntryPoints;
@property(retain, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool isStrictMapRegion; // @synthesize isStrictMapRegion=_isStrictMapRegion;
@property(retain, nonatomic) NSMutableArray *filterByBusinessCategorys; // @synthesize filterByBusinessCategorys=_filterByBusinessCategorys;
@property(nonatomic) int maxBusinessReviews; // @synthesize maxBusinessReviews=_maxBusinessReviews;
@property(nonatomic) _Bool includeBusinessCategories; // @synthesize includeBusinessCategories=_includeBusinessCategories;
@property(nonatomic) _Bool includeBusinessRating; // @synthesize includeBusinessRating=_includeBusinessRating;
@property(nonatomic) struct GEOSessionID sessionGUID; // @synthesize sessionGUID=_sessionGUID;
@property(nonatomic) _Bool includePhonetics; // @synthesize includePhonetics=_includePhonetics;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) NSString *search; // @synthesize search=_search;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) GEOAddress *address; // @synthesize address=_address;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasViewportCenterCountryCode;
@property(readonly, nonatomic) _Bool hasDeviceLocationCountryCode;
@property(nonatomic) _Bool hasIsPopularNearbyRequest;
- (int)StringAsMapMode:(id)arg1;
- (id)mapModeAsString:(int)arg1;
@property(nonatomic) _Bool hasMapMode;
@property(nonatomic) int mapMode; // @synthesize mapMode=_mapMode;
@property(readonly, nonatomic) _Bool hasAdditionalEnabledMarkets;
@property(nonatomic) _Bool hasIncludeNameForForwardGeocodingResults;
@property(readonly, nonatomic) _Bool hasSearchLocation;
- (int)StringAsOptionalSuppressionReasons:(id)arg1;
- (id)optionalSuppressionReasonsAsString:(int)arg1;
- (void)setOptionalSuppressionReasons:(int *)arg1 count:(unsigned long long)arg2;
- (int)optionalSuppressionReasonAtIndex:(unsigned long long)arg1;
- (void)addOptionalSuppressionReason:(int)arg1;
- (void)clearOptionalSuppressionReasons;
@property(readonly, nonatomic) int *optionalSuppressionReasons;
@property(readonly, nonatomic) unsigned long long optionalSuppressionReasonsCount;
- (int)StringAsSearchSource:(id)arg1;
- (id)searchSourceAsString:(int)arg1;
@property(nonatomic) _Bool hasSearchSource;
@property(nonatomic) int searchSource; // @synthesize searchSource=_searchSource;
@property(nonatomic) _Bool hasIncludeMatchedToken;
- (int)StringAsKnownAccuracy:(id)arg1;
- (id)knownAccuracyAsString:(int)arg1;
@property(nonatomic) _Bool hasKnownAccuracy;
@property(nonatomic) int knownAccuracy; // @synthesize knownAccuracy=_knownAccuracy;
@property(readonly, nonatomic) _Bool hasKnownLocation;
@property(nonatomic) _Bool hasIntersectingGeoId;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(nonatomic) _Bool hasIncludeFeatureSets;
@property(readonly, nonatomic) _Bool hasIndexFilter;
@property(nonatomic) _Bool hasIncludeUnmatchedStrings;
@property(readonly, nonatomic) _Bool hasPreserveFields;
@property(nonatomic) _Bool hasIncludeStatusCodeInfo;
@property(readonly, nonatomic) _Bool hasSearchContextSubstring;
@property(readonly, nonatomic) _Bool hasSearchContext;
@property(nonatomic) _Bool hasIncludeGeoId;
- (id)searchSubstringAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchSubstringsCount;
- (void)addSearchSubstring:(id)arg1;
- (void)clearSearchSubstrings;
@property(nonatomic) _Bool hasExcludeAddressInResults;
@property(nonatomic) _Bool hasIncludeQuads;
@property(nonatomic) _Bool hasGeoId;
@property(nonatomic) _Bool hasIsCanonicalLocationSearch;
- (id)limitToCountryCodeIso2AtIndex:(unsigned long long)arg1;
- (unsigned long long)limitToCountryCodeIso2sCount;
- (void)addLimitToCountryCodeIso2:(id)arg1;
- (void)clearLimitToCountryCodeIso2s;
@property(nonatomic) _Bool hasIncludeRoadAccessPoints;
@property(nonatomic) _Bool hasIncludeTravelDistance;
@property(nonatomic) _Bool hasIsStrictGeocoding;
- (int)StringAsPlaceTypeLimit:(id)arg1;
- (id)placeTypeLimitAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceTypeLimit;
@property(nonatomic) int placeTypeLimit; // @synthesize placeTypeLimit=_placeTypeLimit;
@property(readonly, nonatomic) _Bool hasSuggestionsOptions;
- (int)StringAsTransportTypeForTravelTimes:(id)arg1;
- (id)transportTypeForTravelTimesAsString:(int)arg1;
@property(nonatomic) _Bool hasTransportTypeForTravelTimes;
@property(nonatomic) int transportTypeForTravelTimes; // @synthesize transportTypeForTravelTimes=_transportTypeForTravelTimes;
@property(nonatomic) _Bool hasIncludeTravelTime;
@property(readonly, nonatomic) _Bool hasClientCapabilities;
@property(readonly, nonatomic) _Bool hasDeviceTimeZone;
@property(nonatomic) _Bool hasIncludeSpokenNames;
@property(nonatomic) _Bool hasTimeSinceMapViewportChanged;
@property(nonatomic) _Bool hasTimeSinceMapEnteredForeground;
@property(nonatomic) _Bool hasIsFromAPI;
@property(nonatomic) _Bool hasSuppressResultsRequiringAttribution;
@property(nonatomic) _Bool hasSequenceNumber;
@property(readonly, nonatomic) _Bool hasPhoneticLocaleIdentifier;
@property(readonly, nonatomic) _Bool hasInputLanguage;
@property(readonly, nonatomic) _Bool hasDeviceLocation;
@property(readonly, nonatomic) _Bool hasDeviceCountryCode;
@property(readonly, nonatomic) _Bool hasSuggestionsPrefix;
@property(nonatomic) _Bool hasStructuredSearch;
@property(nonatomic) _Bool hasIncludeSuggestionsOnly;
@property(nonatomic) _Bool hasLocalSearchProviderID;
@property(readonly, nonatomic) _Bool hasBusinessOptions;
@property(nonatomic) _Bool hasIncludeEntryPoints;
@property(readonly, nonatomic) _Bool hasZilchPoints;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasIsStrictMapRegion;
- (id)filterByBusinessCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterByBusinessCategorysCount;
- (void)addFilterByBusinessCategory:(id)arg1;
- (void)clearFilterByBusinessCategorys;
@property(nonatomic) _Bool hasMaxBusinessReviews;
@property(nonatomic) _Bool hasIncludeBusinessCategories;
@property(nonatomic) _Bool hasIncludeBusinessRating;
- (int)StringAsBusinessSortOrder:(id)arg1;
- (id)businessSortOrderAsString:(int)arg1;
@property(nonatomic) _Bool hasBusinessSortOrder;
@property(nonatomic) int businessSortOrder; // @synthesize businessSortOrder=_businessSortOrder;
@property(nonatomic) _Bool hasSessionGUID;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) int maxResults; // @synthesize maxResults=_maxResults;
@property(nonatomic) _Bool hasIncludePhonetics;
- (int)StringAsAdditionalPlaceTypes:(id)arg1;
- (id)additionalPlaceTypesAsString:(int)arg1;
- (void)setAdditionalPlaceTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)additionalPlaceTypeAtIndex:(unsigned long long)arg1;
- (void)addAdditionalPlaceType:(int)arg1;
- (void)clearAdditionalPlaceTypes;
@property(readonly, nonatomic) int *additionalPlaceTypes;
@property(readonly, nonatomic) unsigned long long additionalPlaceTypesCount;
@property(readonly, nonatomic) _Bool hasMapRegion;
@property(readonly, nonatomic) _Bool hasSearch;
@property(readonly, nonatomic) _Bool hasLocation;
@property(readonly, nonatomic) _Bool hasAddress;
- (void)setBusinessIDs:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)businessIDAtIndex:(unsigned long long)arg1;
- (void)addBusinessID:(unsigned long long)arg1;
- (void)clearBusinessIDs;
@property(readonly, nonatomic) unsigned long long *businessIDs;
@property(readonly, nonatomic) unsigned long long businessIDsCount;
- (void)dealloc;
- (id)initWithTraits:(id)arg1;

@end

