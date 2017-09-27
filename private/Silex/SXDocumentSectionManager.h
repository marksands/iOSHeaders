//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXDocumentSectionManager.h"

@class NSMutableDictionary, NSString;

@interface SXDocumentSectionManager : NSObject <SXDocumentSectionManager>
{
    id <SXDocumentSectionHosting> _hosting;
    NSMutableDictionary *_blueprints;
}

@property(readonly, nonatomic) NSMutableDictionary *blueprints; // @synthesize blueprints=_blueprints;
@property(readonly, nonatomic) __weak id <SXDocumentSectionHosting> hosting; // @synthesize hosting=_hosting;
- (void).cxx_destruct;
- (id)view;
- (id)viewController;
- (double)heightForBlueprint:(id)arg1 width:(double)arg2;
- (void)applySectionBlueprint:(id)arg1 identifier:(id)arg2 offset:(struct CGPoint)arg3 width:(double)arg4;
- (id)initWithSectionHosting:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

