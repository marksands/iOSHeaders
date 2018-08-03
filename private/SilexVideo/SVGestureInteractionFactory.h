//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVGestureInteractionFactory.h"

@class NSString;

@interface SVGestureInteractionFactory : NSObject <SVGestureInteractionFactory>
{
    id <SVInteractionContextFactory> _interactionContextFactory;
}

@property(readonly, nonatomic) id <SVInteractionContextFactory> interactionContextFactory; // @synthesize interactionContextFactory=_interactionContextFactory;
- (void).cxx_destruct;
- (id)createInteractionWithGestureRecognizer:(id)arg1;
- (id)initWithInteractionContextFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

