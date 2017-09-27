//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSUtility/TSUZipArchive.h>

@class NSObject<OS_dispatch_queue>, NSURL;

@interface TSUZipFileArchive : TSUZipArchive
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _archiveLength;
    id <TSUReadChannel> _archiveReadChannel;
    NSURL *_temporaryDirectoryURL;
}

+ (void)readArchiveFromURL:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)readChannel;
- (unsigned long long)archiveLength;
- (_Bool)copyToTemporaryLocationRelativeToURL:(id)arg1;
- (_Bool)reopenWithTemporaryURL:(id)arg1;
- (void)removeTemporaryDirectory;
- (void)createTemporaryDirectoryRelativeToURL:(id)arg1;
- (void)dealloc;
- (id)initWithWriter:(id)arg1 atURL:(id)arg2;
- (_Bool)openWithURL:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

