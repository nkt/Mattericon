//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  5 2015 02:41:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXViewControllerTransitionCoordinatorContext-Protocol.h>

@class UXView;

@protocol UXViewControllerTransitionCoordinator <UXViewControllerTransitionCoordinatorContext>
- (void)notifyWhenInteractionEndsUsingBlock:(void (^)(id <UXViewControllerTransitionCoordinatorContext>))arg1;
- (BOOL)animateAlongsideTransitionInView:(UXView *)arg1 animation:(void (^)(id <UXViewControllerTransitionCoordinatorContext>))arg2 completion:(void (^)(id <UXViewControllerTransitionCoordinatorContext>))arg3;
- (BOOL)animateAlongsideTransition:(void (^)(id <UXViewControllerTransitionCoordinatorContext>))arg1 completion:(void (^)(id <UXViewControllerTransitionCoordinatorContext>))arg2;
@end
