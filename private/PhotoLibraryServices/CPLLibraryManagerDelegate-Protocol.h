//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPLLibraryManager, NSString;

@protocol CPLLibraryManagerDelegate <NSObject>
- (void)libraryManagerHasChangesToPull:(CPLLibraryManager *)arg1;
- (void)libraryManagerDidStartSynchronization:(CPLLibraryManager *)arg1;
- (void)libraryManagerStatusDidChange:(CPLLibraryManager *)arg1;

@optional
- (NSString *)displayableNameForLibraryManager:(CPLLibraryManager *)arg1;
- (void)libraryManagerHasStatusChanges:(CPLLibraryManager *)arg1;
- (void)libraryManagerDidChangeConfiguration:(CPLLibraryManager *)arg1;
@end

