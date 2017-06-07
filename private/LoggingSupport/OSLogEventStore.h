//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface OSLogEventStore : NSObject
{
    NSURL *_archiveURL;
    NSString *_relativeFilePath;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _upgradeHandler;
}

+ (id)storeWithFileURL:(id)arg1;
+ (id)storeWithArchiveURL:(id)arg1;
+ (id)localStore;
@property(copy, nonatomic) CDUnknownBlockType _upgradeHandler; // @synthesize _upgradeHandler;
@property(copy, nonatomic) CDUnknownBlockType _progressHandler; // @synthesize _progressHandler;
@property(retain, nonatomic) NSString *_relativeFilePath; // @synthesize _relativeFilePath;
@property(retain, nonatomic) NSURL *_archiveURL; // @synthesize _archiveURL;
- (void).cxx_destruct;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setUpgradeConfirmationHandler:(CDUnknownBlockType)arg1;
- (void)setProgressHandler:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithArchiveURL:(id)arg1;

@end

