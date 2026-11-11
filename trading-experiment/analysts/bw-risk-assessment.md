# BW Risk Assessment — Risk Management Report

**Date: 2026-11-11 (Wednesday), ~13:41 ET** (18:41 UTC, live-verified via Robinhood `get_portfolio`, `get_equity_positions`, `get_equity_quotes` on account 424593861). Prior BW report: 2026-11-11, ~09:42 ET, **D+**. Persona file re-read fresh this run — no edits by Jash since last cycle; mandate, format, stance unchanged.

---

## Overall Portfolio Risk Grade: **D+** (held flat vs. this morning)

Radical transparency means not inflating a grade just because the tape is green. The pool has quietly improved for the fourth straight check today (-1.636% at 09:42 ET → -1.024% now), NVDA's $180 breach is now its shallowest reading in a week, and OMCL has widened its cushion above the bear-case line. That is genuine, not noise. But none of it changes the structural picture this desk has been flagging for days: the book still carries a binary earnings event in 6 days stacked on an unresolved governance overhang, with only 12.3% of the pool in dry powder. A good tape day doesn't retire that risk — it just means the bill hasn't come due yet. Grade holds at D+.

**The single biggest risk right now: unchanged from this morning. NVDA's 11/17 earnings print (6 days out) sits directly behind an unresolved congressional/governance overhang whose RSVP deadline was today — and as of this run, no source confirms whether Huang accepted, declined, or countered.** A dedicated fresh search this run (see below) found nothing dated to today on either the RSVP outcome or the board's Wachtell Lipton-led investigation. This is not a new fact, it's the same open question running one calendar day further without resolution, now with the earnings clock six days closer.

---

## Live portfolio snapshot (ground truth, this run)

- **Total account value: $99.4878054492** (cash $56.10 + equity $43.3878054492)
- **Trading pool (house capital rule — $50 base + accumulated P&L, remaining ~$50 is off-limits reserve): $49.4878054492 — a -$0.5121945508 (-1.024%) accumulated loss.** Improvement continues: 09:42 ET was -1.636%, and every scheduled check since has nudged tighter.
- **Deployable cash remaining in the pool: $6.10 (12.33% of pool)** — unchanged, still the thinnest lever in the book.
- **Equity deployed: $43.3878054492 (87.67% of pool).**

| Holding | Qty | Live px | Position $ | % of equity | % of pool | Today's move |
|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $177.22 | $4.3997 | 10.14% | 8.89% | **+4.93%** (still -1.54% below the $180 contingency line — shallowest breach this week) |
| VTI | 0.036690 | $375.405 | $13.7736 | 31.75% | 27.84% | +1.58% |
| VXUS | 0.154525 | $83.545 | $12.9098 | 29.75% | 26.09% | +1.07% |
| OMCL | 0.106405 | $36.01 | $3.8316 | 8.83% | 7.74% | +0.31% (**+2.19% buffer above MS's $35.24 bear line**) |
| XLE | 0.086775 | $63.015 | $5.4681 | 12.60% | 11.05% | +1.29% |
| GEHC | 0.036393 | $82.615 | $3.0066 | 6.93% | 6.08% | **-1.24%** (only red holding today) |
| Cash | — | — | $6.10 | — | 12.33% | — |

Concentration triggers re-checked fresh: **NVDA+OMCL combined = 18.97% of equity** (trigger at ~25%, buffer ~6.03pp, essentially unchanged in direction) — clean. **NVDA single-name = 10.14% of equity** (trigger 18-20%) — clean, well inside. **GEHC vs. BR's 4%-of-pool target = 6.08%, a +2.08pp overweight** (partial-trim trigger at 7.5%/+3.5pp drift — buffer ~1.42pp, slightly wider than this morning's ~1.33pp as GEHC was today's lone decliner) — narrower drift than most of this week, but still the largest standing policy gap on the sheet, now entering its ninth-plus consecutive report flagged unresolved.

---

## Correlation analysis

Unchanged from this morning's read, and worth repeating plainly rather than letting a green tape paper over it: the headline NVDA weight (10.14% of equity) still understates this book's true AI/mega-cap-growth factor loading. VTI is cap-weighted — its top holdings are the same mega-cap AI/tech names (NVDA, MSFT, AAPL, GOOG, META, AMZN) that make up roughly 35-40% of the fund by weight. That means VTI's 31.75%-of-equity sleeve carries an estimated ~11-13pp of *indirect* AI-mega-cap exposure on top of NVDA's own 10.14% direct stake. **Effective AI/mega-cap-growth factor exposure is closer to ~21-23% of equity, not 10%** — more than double what the single-name concentration trigger alone would suggest.

NVDA and OMCL remain the pair that moves together on rate-driven, multiple-compression days (the repeated same-session $180/$35.24 line tests this week are the evidence), with lower correlation on name-specific catalyst days. XLE continues to be the book's one genuine internal diversifier — up again today while GEHC was the lone decliner, the mirror image of several prior sessions. VXUS remains loosely correlated to the US sleeve day-to-day but shares the same risk-on/risk-off macro sensitivity in a real stress scenario (see below).

---

## Sector concentration (% of equity, direct exposure)

| Sector | Holdings | % of equity |
|---|---|---|
| Technology / Semis (direct) | NVDA | 10.14% |
| Healthcare (direct) | OMCL + GEHC | 15.76% |
| Energy (direct) | XLE | 12.60% |
| Diversified US equity (cap-weighted, ~35-40% tech-tilted) | VTI | 31.75% |
| Diversified international equity | VXUS | 29.75% |

Named-sector concentration alone still looks diversified. It is not, once VTI's internal tilt is counted — true technology/AI-correlated exposure is closer to a fifth of the book than a tenth. Healthcare at 15.76% direct remains split between a small-cap healthcare-IT name (OMCL) and a mid-cap healthcare-device name (GEHC) with genuinely different risk profiles — still a mistake to treat as one bucket for sizing purposes.

## Geographic exposure and currency risk

- **US-domiciled/listed: ~70.25% of equity** (NVDA + OMCL + XLE + GEHC + VTI, all USD-reporting).
- **International (ex-US, via VXUS): ~29.75% of equity**, unhedged. VXUS's typical ~75-80% developed / ~20-25% emerging-market split still implies an estimated **~6-7% of total equity sitting in unhedged EM currency risk** on top of developed-market FX exposure.
- **GEHC** still carries the second-layer FX-translation sensitivity the sector table doesn't show — global diagnostic-imaging/monitoring revenue despite 100% US domicile.
- Net: no currency hedge of any kind exists in this toolbox. A dollar-strengthening move remains a plausible, if secondary, headwind to the ~30% VXUS sleeve, especially if the Fed holds its current range while rate-cut odds elsewhere soften.

## Interest rate sensitivity by position

| Holding | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth multiple; MS's unchanged $192.0 DCF (WACC 11.59%) still shows it structurally rate-sensitive on both the discount rate and the multiple |
| OMCL | **High** | Small-cap, SaaS-like recurring-revenue healthcare-tech — same long-duration multiple-compression dynamic as NVDA, amplified by thin liquidity on any repricing |
| VTI | **Moderate-High** | Cap-weighted toward the same long-duration mega-cap growth names driving NVDA's own sensitivity |
| VXUS | **Moderate** | Less mega-cap-growth-weighted than VTI, but EM sleeve adds USD-strength/Fed-policy sensitivity on top of local rate cycles |
| GEHC | **Moderate** | Real balance-sheet leverage (GE spin-off legacy) — rate moves hit interest expense directly, hospital-customer capex cycles are credit-sensitive |
| XLE | **Low (direct)** | Cash-flow-generative value sector; primary driver is oil price, main rate linkage is indirect (growth-slowdown → demand) |

**House context, re-verified this run via dedicated WebSearch:** nothing dated to today (11/11) found on either the 10yr or Fed funds. Most recent confirmed figures still stand: 10yr at **~4.84-4.90%** (FRED/Advisor Perspectives, 11/5-11/6 dated), Fed funds held at **3.75-4.00%** (10/28 FOMC, two dissents favoring a hike), with December-cut odds reportedly softening (~68% as of 11/5, down from ~83%). That leaves rule 6a's 4.75% rate-shock-pause reopening threshold **still only ~9-15bp away** — the closest sustained reading since the pause began 9/2, and still the single most proximate macro trigger in the book. If it fires, NVDA/OMCL/VTI's long-duration sleeve (collectively >70% of equity once VTI's tilt is counted) is where it bites hardest.

## Recession stress test (illustrative drawdown estimate, not a forecast)

Using the same rough historical sector drawdown ranges (2008/2020/2022), scaled to today's weights:

| Holding | Est. recession drawdown | Weight (equity) | Weighted contribution |
|---|---|---|---|
| NVDA | -52% | 10.14% | -5.27pp |
| VTI | -30% | 31.75% | -9.53pp |
| VXUS | -32% | 29.75% | -9.52pp |
| OMCL | -35% | 8.83% | -3.09pp |
| XLE | -40% | 12.60% | -5.04pp |
| GEHC | -22% | 6.93% | -1.52pp |
| **Portfolio (equity-weighted)** | | | **≈ -34.0%** |

Unchanged from this morning — the weight shifts today were too small to move this materially. Translated to the pool (equity 87.67% of the $49.49 pool): a recession-grade equity bear market would still be expected to take roughly **-29.8% off the pool**, turning today's modest -1.0% loss into something on the order of a **-30% loss versus the original $50 base**. That gap between the account's calm present state and its tail-case exposure is exactly what radical transparency exists to keep in view.

## Liquidity risk rating by holding

| Holding | Liquidity risk | Basis |
|---|---|---|
| NVDA | **Very Low** | Mega-cap, hyper-liquid, tight spreads confirmed again this run ($177.21/$177.22) |
| VTI | **Very Low** | Massive-AUM ETF, deepest liquidity in the book |
| XLE | **Low** | Large, liquid sector ETF |
| VXUS | **Low** | Large-AUM international ETF, slightly wider spreads than VTI but still liquid |
| GEHC | **Moderate** | Mid/large-cap but has repeatedly shown wide pre-market spreads this week — fine intraday, thin at the open |
| OMCL | **Moderate-High** | Small-cap (~$1.5-2B), the book's thinnest name by a wide margin — pre-market spreads have been seen north of 20% quoted width this week; any forced exit outside regular-session hours risks a materially worse fill than the last quote |

Standing structural weakness, not a one-off: house rule 4 (don't size off pre-market quotes for thin names) exists precisely because OMCL and GEHC keep showing unusable pre-market liquidity. If this book ever needs to raise cash fast, sequence the liquid sleeve (VTI/VXUS/XLE) first and treat OMCL as the position most likely to cost real slippage on a rushed exit.

## Single stock risk and position sizing

- **NVDA (10.14% equity / 8.89% pool):** within both the single-name (18-20%) and combined (25%) concentration triggers, but remains the book's only position with a dated, binary catalyst inside the next week (11/17, now 6 days out) *and* an unresolved governance/headline risk whose own deadline landed today with no confirmed outcome. Sizing is fine by policy; the risk is event-clustering, not weight. No new adds pre-print per the existing contingency plan — correctly already house policy, reaffirming it again today.
- **OMCL (8.83% equity / 7.74% pool):** small weight, disproportionate idiosyncratic risk given thin liquidity. The OMCL DCA/profit gate (needs $2.50 of accumulated profit; currently ~$3.01 away with the pool still net-negative) correctly keeps this from growing — that discipline should hold.
- **GEHC (6.93% equity / 6.08% pool):** still the most overweight name relative to its own named policy target (+2.08pp vs. BR's 4%-of-pool line), now flagged in nine-plus consecutive cross-desk reports without the mechanical 7.5%/+3.5pp trigger actually firing. Repeating the point plainly as the team skeptic: a gap this persistent, that never closes and never triggers, is itself informative — either the trigger threshold needs revisiting or the target needs a formal reset, not another cycle of acknowledgment-without-action. BR has already declined to redraw the band (rule 20), which is a defensible call, but the "watch and do nothing" posture is now in its second week and deserves a harder look if it runs much longer.
- **XLE (12.60% equity / 11.05% pool):** structurally a single-factor (oil price) bet sized larger than NVDA, wrapped in ETF packaging that makes it look diversified. It isn't — XOM+CVX alone are a large share of the fund. Size is within the house's intended half-size-satellite band; still the second-largest concentrated risk factor in the book after the AI/mega-growth factor, and still today's lone-riser-turned-not-quite-lone-riser (GEHC was today's outlier instead, in the other direction).

## Tail risk scenarios (probability estimates, house-skeptic framing)

| Scenario | Rough probability (next 1-4 weeks unless noted) | Est. impact |
|---|---|---|
| NVDA 11/17 earnings miss or guide-down vs. the $108.0B±2% band | ~15-20% | -15% to -25% on NVDA (~-1.3 to -2.3pp of pool) |
| NVDA beats cleanly but stock still falls/gives back gains (JPM's own empirical note: 4 of last 5 beats did exactly this) | ~40-50% (higher than a structural miss, lower-magnitude) | -5% to -10% on NVDA |
| Huang/Megaspeed situation escalates (RSVP declined, subpoena threat, fresh spy-link reporting, or an adverse Wachtell Lipton finding) in the next 1-2 weeks | ~10-15%, and today's unresolved RSVP deadline keeps this live rather than fading | -5% to -15% single-day NVDA move, sentiment-driven not fundamental |
| 10yr crosses back above the 4.75% rate-shock threshold (currently ~9-15bp away, the closest since 9/2) in the next 2-4 weeks | ~30-35% given proximity | -5% to -8% portfolio-wide, concentrated in VTI/NVDA/OMCL's long-duration sleeve |
| Oil demand-shock / recession-driven energy selloff | ~15% over the next 1-3 months | -15% to -20% on XLE specifically |
| OMCL thin-liquidity gap move (>10% single session, either direction) | ~10% over the next month | ~0.8pp of pool, worse if forced to exit into it |
| Full recession onset (12-month horizon) | ~20-25% (genuinely uncertain, flagged as a placeholder not a forecast) | ≈-30% of pool, per stress test above |

## Hedging strategies for the top 3 risks (equities-only toolbox, no options)

1. **NVDA/AI-factor concentration into the 11/17 print + unresolved governance overhang.** No options are available to hedge the binary event directly. The only equities-only lever remains exposure reduction or cash-buffer preservation: hold deployable cash flat (don't deploy the remaining $6.10 into anything AI/tech-adjacent before the print), and continue treating any further NVDA-correlated add — including within VTI's own tilt — as something to actively avoid through the print and the governance resolution, not just a neutral default.
2. **Rate-shock/duration risk across VTI/NVDA/OMCL's long-duration sleeve.** XLE remains the book's only real natural hedge against this — it's green again today while GEHC is red, the kind of decoupling that has recurring value precisely because it isn't guaranteed. Recommend continuing to *not* trim XLE to fund anything else while this rate-shock risk sits this close to its threshold.
3. **OMCL/GEHC illiquidity compounding a forced exit.** The hedge is sequencing, not a new position: if the pool ever needs to raise cash under pressure, draw from the liquid VTI/VXUS/XLE sleeve first and treat OMCL as the position to exit last and most carefully (smaller clips, regular-session only, never off a pre-market quote).

## Rebalancing suggestions

- **GEHC: hold, do not add** — +2.08pp over BR's 4% target with ~1.42pp of runway to the formal trim trigger. No action needed yet, but flagging again (ninth-plus consecutive report) that this persistent gap deserves a fresh look at either the trigger threshold or the target itself, rather than another cycle of acknowledgment-without-action.
- **NVDA: hold, no pre-print resizing** — at 8.89% of pool it remains under BR's ~10-11% pool target, so there is nominal room, but event-clustering risk (earnings + unresolved governance deadline) argues against using that room this week regardless of price action.
- **XLE: hold, do not trim** — preserve as the book's one genuine diversification/rate-hedge holding.
- **OMCL: hold, no add** — DCA/profit gate correctly blocks this while the pool is net-negative; don't override it on price alone.
- **Cash: hold the $6.10 buffer flat** through the remainder of the 11/17 pre-print window and the unresolved governance deadline — this is still not the week to compress the only dry powder in the book further.

---

## Heat map summary

| Risk factor | Level | Trend vs. this morning (09:42 ET) |
|---|---|---|
| NVDA earnings-event risk (11/17, T-6) | 🔴 High | Unchanged — one day closer, no new fact |
| Governance/headline overhang (Huang/Megaspeed, RSVP deadline landed today) | 🔴 High | Unchanged — deadline landed, still unresolved |
| AI/mega-growth factor concentration (look-through, ~21-23% of equity) | 🟠 Elevated | Unchanged |
| Rate-shock proximity (10yr ~9-15bp from the 4.75% threshold) | 🟠 Elevated | Unchanged, still the closest since 9/2 |
| GEHC policy drift vs. BR's 4% target (+2.08pp, ~1.42pp from trigger) | 🟡 Moderate | Marginally improved (was +2.15pp this morning) |
| OMCL bear-case-line cushion ($35.24 line, now +2.19%) | 🟡 Moderate | Marginally improved (was +2.21% this morning — essentially flat) |
| Liquidity (OMCL/GEHC thin pre-market depth) | 🟡 Moderate | Unchanged, structural |
| Dry powder (12.33% of pool deployable) | 🟠 Elevated | Unchanged, structurally thin |
| Currency/geographic exposure (unhedged VXUS, ~30% of equity) | 🟢 Low-Moderate | Unchanged |
| Diversification (XLE as sole internal hedge) | 🟢 Low (favorable) | Unchanged, working again today |

---

*Prepared by BW Risk Assessment, Bridgewater-style radical-transparency desk. Figures verified live via Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861 at run time; macro figures (Fed funds, 10yr) re-checked via dedicated WebSearch this run — nothing dated to today found, so the 11/5-11/6 FRED/Advisor Perspectives readings are carried forward per the standing same-day dateline-wall note. Sources: [House Chairs Ask Nvidia CEO Jensen Huang for Closed-Door Briefing](https://letsdatascience.com/news/house-chairs-ask-nvidia-ceo-jensen-huang-for-closed-door-bri-d3ca0fdc), [House Republicans Press Nvidia's Huang for Nov. 18 China Briefing](https://valueaddvc.com/pulse/nvidia-huang-china-briefing-congress-2026), [Treasury Yields Snapshot: November 6, 2026](https://www.advisorperspectives.com/dshort/updates/2026/11/06/treasury-yields-snapshot-november-6-2026).*
