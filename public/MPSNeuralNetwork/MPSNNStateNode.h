//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPSNNFilterNode;

@interface MPSNNStateNode : NSObject
{
    id <MPSHandle> _handle;
    MPSNNFilterNode *_parent;
}

@property(retain, nonatomic) id <MPSHandle> handle; // @synthesize handle=_handle;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)debugDescription;
- (id)initWithParent:(id)arg1;

@end
