//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstallCoordination/IXSDataPromiseProxy-Protocol.h>

@class NSURL;

@protocol IXSOwnedDataPromiseProxy <IXSDataPromiseProxy>
- (oneway void)_remote_getStagedPath:(void (^)(NSURL *, NSError *))arg1;
- (oneway void)_remote_setStagedPath:(NSURL *)arg1;
@end

