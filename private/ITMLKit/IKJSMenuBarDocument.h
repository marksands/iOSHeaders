//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "IKJSMenuBarDocument.h"

@interface IKJSMenuBarDocument : IKJSObject <IKJSMenuBarDocument>
{
    id <IKJSMenuBarDocumentAppBridge> _appBridge;
}

@property(nonatomic) __weak id <IKJSMenuBarDocumentAppBridge> appBridge; // @synthesize appBridge=_appBridge;
- (void).cxx_destruct;
- (id)_entityUniqueIdentifierForObject:(id)arg1;
- (void)setSelectedItem:(id)arg1:(id)arg2;
- (id)getSelectedItem;
- (void)setDocument:(id)arg1:(id)arg2:(id)arg3;
- (id)getDocument:(id)arg1;

@end

