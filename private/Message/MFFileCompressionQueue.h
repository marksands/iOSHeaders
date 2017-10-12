//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, NSObject<OS_os_activity>;

@interface MFFileCompressionQueue : NSObject
{
    _Bool _activityCreated;
    NSMutableArray *_fileCompressionQueue;
    NSLock *_fileCompressionQueueLock;
    NSObject<OS_os_activity> *_libraryCompressionActivity;
    NSObject<OS_os_activity> *_fileCompressionQueueActivity;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool activityCreated; // @synthesize activityCreated=_activityCreated;
@property(retain, nonatomic) NSObject<OS_os_activity> *fileCompressionQueueActivity; // @synthesize fileCompressionQueueActivity=_fileCompressionQueueActivity;
@property(retain, nonatomic) NSObject<OS_os_activity> *libraryCompressionActivity; // @synthesize libraryCompressionActivity=_libraryCompressionActivity;
@property(retain, nonatomic) NSLock *fileCompressionQueueLock; // @synthesize fileCompressionQueueLock=_fileCompressionQueueLock;
@property(retain, nonatomic) NSMutableArray *fileCompressionQueue; // @synthesize fileCompressionQueue=_fileCompressionQueue;
- (void).cxx_destruct;
- (void)createCompressionActivity;
- (long long)size;
- (id)nextFile;
- (_Bool)hasNext;
- (void)addFile:(id)arg1;
- (id)init;

@end
