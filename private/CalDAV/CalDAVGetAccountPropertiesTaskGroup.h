//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVGetAccountPropertiesTaskGroup.h"

@class CalDAVServerVersion, NSSet, NSURL;

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup
{
    _Bool _supportsCalendarUserSearch;
    NSURL *_delegatePrincipalURL;
    NSSet *_calendarHomes;
    NSSet *_preferredUserAddresses;
    NSURL *_inboxURL;
    NSURL *_outboxURL;
    NSURL *_dropboxURL;
    NSURL *_notificationURL;
    NSURL *_updatedPrincipalURL;
    CalDAVServerVersion *_serverVersion;
}

@property(readonly, nonatomic) _Bool supportsCalendarUserSearch; // @synthesize supportsCalendarUserSearch=_supportsCalendarUserSearch;
@property(readonly, nonatomic) CalDAVServerVersion *serverVersion; // @synthesize serverVersion=_serverVersion;
@property(readonly, nonatomic) NSURL *updatedPrincipalURL; // @synthesize updatedPrincipalURL=_updatedPrincipalURL;
@property(readonly, nonatomic) NSURL *notificationURL; // @synthesize notificationURL=_notificationURL;
@property(readonly, nonatomic) NSURL *dropboxURL; // @synthesize dropboxURL=_dropboxURL;
@property(readonly, nonatomic) NSURL *outboxURL; // @synthesize outboxURL=_outboxURL;
@property(readonly, nonatomic) NSURL *inboxURL; // @synthesize inboxURL=_inboxURL;
@property(readonly, nonatomic) NSSet *preferredUserAddresses; // @synthesize preferredUserAddresses=_preferredUserAddresses;
@property(readonly, nonatomic) NSSet *calendarHomes; // @synthesize calendarHomes=_calendarHomes;
@property(retain, nonatomic) NSURL *delegatePrincipalURL; // @synthesize delegatePrincipalURL=_delegatePrincipalURL;
- (void).cxx_destruct;
- (void)processPrincipalHeaders:(id)arg1;
- (_Bool)forceOptionsRequest;
- (id)userAddresses;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)homeSet;
- (void)startTaskGroup;
- (id)_copyAccountPropertiesPropFindElements;
- (id)description;

@end

