//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface MPArtworkResizeUtility : NSObject
{
    NSObject<OS_dispatch_queue> *_artworkResizingAccessQueue;
    NSOperationQueue *_artworkResizingOperationQueue;
    NSMapTable *_artworkResizingOperations;
}

@property(retain, nonatomic) NSMapTable *artworkResizingOperations; // @synthesize artworkResizingOperations=_artworkResizingOperations;
@property(retain, nonatomic) NSOperationQueue *artworkResizingOperationQueue; // @synthesize artworkResizingOperationQueue=_artworkResizingOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *artworkResizingAccessQueue; // @synthesize artworkResizingAccessQueue=_artworkResizingAccessQueue;
- (void).cxx_destruct;
- (void)cancelResizeImage:(id)arg1;
- (id)resizeImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2 useExactFittingSizeAsDestinationSize:(_Bool)arg3 saveToDestinationURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)init;

@end

