//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseFilter.h>

#import "MapsSuggestionsFilter.h"

@class NSString;

@interface MapsSuggestionsServerSideFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter>
{
    _Bool _enableMapsSuggestionsEntryTypeUnknown;
    _Bool _enableMapsSuggestionsEntryTypeHome;
    _Bool _enableMapsSuggestionsEntryTypeWork;
    _Bool _enableMapsSuggestionsEntryTypeCalendarEvent;
    _Bool _enableMapsSuggestionsEntryTypeFrequentLocation;
    _Bool _enableMapsSuggestionsEntryTypeRecentHistory;
    _Bool _enableMapsSuggestionsEntryTypeFavoritePlace;
    _Bool _enableMapsSuggestionsEntryTypeParkedCar;
    _Bool _enableMapsSuggestionsEntryTypeRestaurantReservation;
    _Bool _enableMapsSuggestionsEntryTypeRidesharing;
    _Bool _enableMapsSuggestionsEntryTypeCarPlayLowEnergy;
    _Bool _enableMapsSuggestionsEntryTypeResumeRoute;
    _Bool _enableMapsSuggestionsEntryTypeAppConnection;
    _Bool _enableMapsSuggestionsEntryTypeHotel;
    _Bool _enableMapsSuggestionsEntryTypeCarRental;
    _Bool _enableMapsSuggestionsEntryTypeTravelFlight;
    _Bool _enableMapsSuggestionsEntryTypeTicketedEvent;
}

+ (_Bool)isEnabled;
- (_Bool)shouldKeepEntry:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

