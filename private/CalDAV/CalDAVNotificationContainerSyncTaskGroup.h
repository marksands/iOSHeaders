//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVContainerSyncTaskGroup.h"

@class NSSet;

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup
{
    NSSet *_notificationTypeNamesToFetch;
}

@property(retain, nonatomic) NSSet *notificationTypeNamesToFetch; // @synthesize notificationTypeNamesToFetch=_notificationTypeNamesToFetch;
- (void).cxx_destruct;
- (id)copyAdditionalResourcePropertiesToFetch;
- (_Bool)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (id)copyGetTaskWithURL:(id)arg1;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;

@end

