//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObjectContext.h>

@interface PLDisconnectedDatabaseCreatorManagedObjectContext : PLManagedObjectContext
{
}

+ (_Bool)canMergeRemoteChanges;
+ (_Bool)_shouldRequestModelMigratorCreateDatabaseOnRebuildAndRetry;
- (void)disconnectFromChangeHub;
- (void)connectToChangeHub;

@end

