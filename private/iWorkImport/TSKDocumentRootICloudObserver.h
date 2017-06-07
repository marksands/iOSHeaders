//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface TSKDocumentRootICloudObserver : NSObject
{
    long long _identifier;
    NSOperationQueue *_operationQueue;
    CDUnknownBlockType _block;
    _Bool _suspendedCollaboration;
    long long _identifer;
}

@property(readonly, nonatomic) _Bool suspendedCollaboration; // @synthesize suspendedCollaboration=_suspendedCollaboration;
@property(readonly, nonatomic) long long identifer; // @synthesize identifer=_identifer;
- (void).cxx_destruct;
- (void)invokeWithDocumentRoot:(id)arg1;
- (id)initWithSuspendedCollaboration:(_Bool)arg1 block:(CDUnknownBlockType)arg2;

@end

