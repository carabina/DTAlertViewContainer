//
//  DTAlertViewContainerProtocols.h
//  DTAlertViewContainer
//
//  Created by Dmitrii Titov on 01.06.17.
//  Copyright © 2017 Dmitriy Titov. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DTAlertViewDelegate <NSObject>

- (void)dismiss;
- (void)layoutAlertViewAnimated:(BOOL)animated;

@end

@protocol DTAlertViewProtocol <NSObject>

@property (nonatomic, weak) id<DTAlertViewDelegate> delegate;

@property (nonatomic, assign) CGFloat requiredHeight;
@property (nonatomic, assign) CGRect frameToFocus;
@property (nonatomic, assign) BOOL needToFocus;

- (void)backgroundPressed;
- (void)focus;

@end
