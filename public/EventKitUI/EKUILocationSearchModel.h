//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "MKSearchCompleterDelegate.h"

@class CLGeocoder, CLInUseAssertion, CLLocationManager, CNContactStore, EKEventStore, EKOccurrenceCacheLocationSearch, EKStructuredLocation, MKLocalSearch, MKLocalSearchCompleter, NSArray, NSCharacterSet, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface EKUILocationSearchModel : NSObject <CLLocationManagerDelegate, MKSearchCompleterDelegate>
{
    CLLocationManager *_locationManager;
    CLInUseAssertion *_locationAssertion;
    MKLocalSearchCompleter *_completer;
    EKStructuredLocation *_currentLocation;
    CLGeocoder *_geocoder;
    MKLocalSearch *_localSearch;
    CNContactStore *_contactStore;
    id <CNCancelable> _contactsSearchToken;
    NSObject<OS_dispatch_queue> *_recentsQueue;
    NSObject<OS_dispatch_queue> *_eventsQueue;
    EKEventStore *_eventStore;
    EKOccurrenceCacheLocationSearch *_eventsSearch;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSObject<OS_dispatch_queue> *_conferenceRoomProcessingQueue;
    NSOperationQueue *_conferenceRoomOperationQueue;
    NSMutableArray *_mutableConferenceRoomSearchResults;
    NSMutableDictionary *_conferenceRoomAddressesToConferenceRooms;
    NSMutableArray *_recentsSearchResults;
    NSMutableArray *_frequentsSearchResults;
    NSMutableArray *_eventsSearchResults;
    NSMutableArray *_contactsSearchResults;
    NSArray *_mapCompletionSearchResults;
    id <EKUILocationSearchModelDelegate> _delegate;
}

@property(nonatomic) id <EKUILocationSearchModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *eventsSearchResults; // @synthesize eventsSearchResults=_eventsSearchResults;
@property(readonly, nonatomic) NSArray *frequentsSearchResults; // @synthesize frequentsSearchResults=_frequentsSearchResults;
@property(readonly, nonatomic) NSArray *recentsSearchResults; // @synthesize recentsSearchResults=_recentsSearchResults;
@property(readonly, nonatomic) NSArray *contactsSearchResults; // @synthesize contactsSearchResults=_contactsSearchResults;
@property(readonly, nonatomic) NSArray *mapCompletionSearchResults; // @synthesize mapCompletionSearchResults=_mapCompletionSearchResults;
@property(retain, nonatomic) EKStructuredLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
- (void).cxx_destruct;
- (_Bool)removeRecentLocation:(id)arg1;
- (void)selectCurrentLocation;
- (void)selectLocation:(id)arg1;
- (void)selectMapSearchCompletion:(id)arg1;
- (void)addLocationToRecents:(id)arg1 addressString:(id)arg2;
- (void)_handleAvailabilityResults:(id)arg1 forOperation:(id)arg2;
- (void)_addDiscoveredConferenceRooms:(id)arg1;
- (void)_processDirectorySearchResultSet:(id)arg1 forOperation:(id)arg2;
- (void)searchConferenceRooms:(id)arg1;
@property(readonly, nonatomic) NSArray *conferenceRoomSearchResults;
- (void)updateEventLocations:(id)arg1;
- (void)searchFrequentLocations:(id)arg1;
- (void)updateRecents:(id)arg1;
- (void)updateContacts:(id)arg1;
- (void)completerDidUpdateResults:(id)arg1 finished:(_Bool)arg2;
- (void)dedupeResults;
- (void)beginSearchForTerm:(id)arg1;
- (void)cancelSearch;
- (void)resetSearchResults:(_Bool)arg1;
- (void)resetConferenceRoomSearchResults;
- (void)resetEventsSearchResults;
- (void)resetContactsSearchResults;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)stopUpdatingLocation;
- (void)getCurrentLocation;
- (void)dealloc;
- (id)initWithEventStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <GEOMapServiceCompletionTicket> lastTicket;
@property(readonly) Class superclass;

@end

