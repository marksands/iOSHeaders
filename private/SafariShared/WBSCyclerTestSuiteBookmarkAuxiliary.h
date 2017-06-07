//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSCyclerOperation;

@interface WBSCyclerTestSuiteBookmarkAuxiliary : NSObject
{
    WBSCyclerOperation *_initialClearOperation;
    WBSCyclerOperation *_resetToDAVModeOperation;
    WBSCyclerOperation *_generateDAVServerIDsForExistingBookmarksOperation;
    WBSCyclerOperation *_cloudKitMigrationOperation;
    WBSCyclerOperation *_clearLocalDataOperation;
    float _operationBackoffRatio;
}

@property(readonly, nonatomic) float operationBackoffRatio; // @synthesize operationBackoffRatio=_operationBackoffRatio;
- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2;
- (id)_errorWithCode:(long long)arg1;
- (void)_attemptToClearDataWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_attemptCloudKitMigrationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_attemptToGenerateDAVServerIDsForExistingBookmarksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_attemptResetToDAVModeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_attemptInitialClearWithTarget:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_formattedStringForBookmark:(id)arg1 indentationLevel:(unsigned long long)arg2;
- (void)resetOperation:(long long)arg1;
- (void)performOperation:(long long)arg1 withTarget:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performOperation:(long long)arg1 withTarget:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)hasPerformedOperation:(long long)arg1;
- (id)validateBookmarks:(id)arg1 expectingBookmarks:(id)arg2 context:(id)arg3;
- (void)fetchAndValidateBookmarksWithExpectedBookmarks:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

