//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSPFileManager : NSObject
{
}

+ (void)copyDataFromReadChannel:(id)arg1 size:(unsigned long long)arg2 toWriteChannel:(id)arg3 synchronous:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)ioCompletionQueue;
+ (void)transcodeReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 synchronous:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)copyDataFromReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 synchronous:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)copyDataFromReadChannel:(id)arg1 decryptionInfo:(id)arg2 toWriteChannel:(id)arg3 encryptionInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (_Bool)copyDataFromReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 error:(id *)arg6;
+ (_Bool)linkOrCopyItemAtURL:(id)arg1 decryptionInfo:(id)arg2 toURL:(id)arg3 encryptionInfo:(id)arg4 canLink:(_Bool)arg5 error:(id *)arg6;
+ (_Bool)linkOrCloneItemAtURL:(id)arg1 toURL:(id)arg2 canLink:(_Bool)arg3 canClone:(_Bool)arg4 error:(id *)arg5;
+ (_Bool)linkOrCloneItemAtURL:(id)arg1 toURL:(id)arg2 canLink:(_Bool)arg3 error:(id *)arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 sourcePath:(id)arg3 targetPath:(id)arg4;

@end

